

@protocol IGProfilePictureHelperDelegate <NSObject>
@optional
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1;
-(void)profilePictureHelper:(id)arg1 willPerformAction:(int)arg2;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
-(void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1;
-(void)profilePictureHelperDidFailDownloadingProfilePicture:(id)arg1;

@end

