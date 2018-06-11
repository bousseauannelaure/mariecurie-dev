var gulp  = require('gulp'),
  sass = require('gulp-sass'),
  sourcemaps = require('gulp-sourcemaps'),
  cleanCss = require('gulp-clean-css'),
  rename = require('gulp-rename'),
  postcss      = require('gulp-postcss'),
  autoprefixer = require('autoprefixer');

gulp.task('build-theme', function() {
  return gulp.src(['src/scss/mariecurie.scss'])
    .pipe(sourcemaps.init())
    .pipe(sass().on('error', sass.logError))
    .pipe(postcss([ autoprefixer({ browsers: [
      'Chrome >= 60',
      'Firefox >= 54',
      'Edge >= 12',
      'Explorer >= 11',
      'iOS >= 8',
      'Safari >= 11',
      'Android 2.3',
      'Android >= 4',
      'Opera >= 12']})]))
    .pipe(sourcemaps.write())
    .pipe(gulp.dest('assets/styles/'))
    .pipe(cleanCss())
    .pipe(rename({suffix: '.min'}))
    .pipe(gulp.dest('assets/styles/'))
});

gulp.task('watch', ['default'], function() {
  gulp.watch(['src/scss/*.scss'], ['default']);
});

gulp.task('copy', function () {
    gulp.src('node_modules/font-awesome/fonts/*')
        .pipe(gulp.dest('assets/fonts'));
});

gulp.task('default', ['build-theme'], function() {
  gulp.start('copy');
});



