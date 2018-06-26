console.log('Mariecurie theme');
jQuery(document).ready(function() {
    console.log('Jquery');
});

jQuery(document).ready(function($) {

    //smaller text on module description
    $('.module-flex-item .back p').each(function(i,e) {
        $this = $(this);
        if ($this.height()>180) {
            $this.addClass('module-md');
        }
        if ($this.height()>180) {
            $this.addClass('module-sm');
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
    $(function(){
        $('.slider-container').loopslider({
            autoplay: false
            ,visibleItems: 1
            ,step: 1
            ,pagination: false
            ,navigation: true
        });
    });
});