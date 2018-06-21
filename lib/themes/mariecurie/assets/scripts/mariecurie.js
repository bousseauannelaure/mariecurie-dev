console.log('Mariecurie theme');
jQuery(document).ready(function() {
    console.log('Jquery');
});

jQuery(document).ready(function($) {

    //smaller text on module description
    $('.module-flex-item .back p').each(function(i,e) {
        $this = $(this);
        if ($this.height>200) {
            $this.addClass('module-md')
        } else if ($this.height>400) {
            $this.addClass('module-sm')
        }
    });

    //smaller text on numbers circles
    $('.circle p').each(function(i,e) {
        $this = $(this);
        var txt = $this.html();
        if (txt.length>7) {
            $this.addClass('circle-sm')
        } else if (txt.length>5) {
            $this.addClass('circle-md')
        }
    });

    //flipboxes
    $('.hover').hover(function(){
        $(this).addClass('flip');
    },function(){
        $(this).removeClass('flip');
    });


    //slider
    var $slider = $(".slider"), $bullets = $(".bullets");
    function calculateHeight(){
        var height = $(".slide.active").outerHeight();
        $slider.height(height);
    }

    $(window).resize(function() {
        calculateHeight();
        clearTimeout($.data(this, 'resizeTimer'));
    });

    function resetSlides(){
        $(".slide.inactive").removeClass("inactiveRight").removeClass("inactiveLeft");
    }

    function gotoSlide($activeSlide, $slide, className){
        $activeSlide.removeClass("active").addClass("inactive "+className);
        $slide.removeClass("inactive").addClass("active");
        calculateHeight();
        //resetBullets(); enable for bullets
        setTimeout(resetSlides, 300);
    }

    $(".next").on("click", function(){
        var $activeSlide = $(".slide.active"),
            $nextSlide = $activeSlide.next(".slide").length != 0 ? $activeSlide.next(".slide") : $(".slide:first-child");
        gotoSlide($activeSlide, $nextSlide, "inactiveLeft");
    });
    $(".previous").on("click",  function(){
        var $activeSlide = $(".slide.active"),
            $prevSlide = $activeSlide.prev(".slide").length != 0 ? $activeSlide.prev(".slide") : $(".slide:last-child");

        gotoSlide($activeSlide, $prevSlide, "inactiveRight");
    });
    /* enable for bullets
    $(document).on("click", ".bullet", function(){
        if($(this).hasClass("active")){
            return;
        }
        var $activeSlide = $(".slide.active");
        var currentIndex = $activeSlide.index();
        var targetIndex = $(this).index();
        var $theSlide = $(".slide:nth-child("+(targetIndex+1)+")");
        gotoSlide($activeSlide, $theSlide, currentIndex > targetIndex ? "inactiveRight" : "inactiveLeft");
    })    */
    function addBullets(){
        var total = $(".slide").length, index = $(".slide.active").index();
        for (var i=0; i < total; i++){
            var $bullet = $("<div>").addClass("bullet");
            if(i==index){
                $bullet.addClass("active");
            }
            $bullets.append($bullet);
        }
    }
    function resetBullets(){
        $(".bullet.active").removeClass("active");
        var index = $(".slide.active").index()+1;
        $(".bullet:nth-child("+index+")").addClass("active");
    }
    //addBullets(); enable for bullets
    calculateHeight();
});