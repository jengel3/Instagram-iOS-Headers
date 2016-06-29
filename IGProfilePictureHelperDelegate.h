

@protocol IGProfilePictureHelperDelegate <NSObject>
@optional
-(void)profilePictureHelperDidGetNewFacebookAccessToken:(id)arg1;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1;
-(void)profilePictureHelper:(id)arg1 willPerformAction:(int)arg2;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
-(void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePictureWithURL:(id)arg2 fromOption:(int)arg3;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3;
-(void)profilePictureHelperDidFailDownloadingProfilePicture:(id)arg1;

@end

