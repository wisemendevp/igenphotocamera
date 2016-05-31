var iosrealtimecam = {
getPicture: function(success, failure){
    cordova.exec(success, failure, "iosrealtimecam", "openCamera", []);
}
};
module.exports = iosrealtimecam;