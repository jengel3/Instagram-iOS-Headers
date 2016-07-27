

@protocol IGUserDetailHeaderViewDelegate <NSObject>
@required
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2;
-(void)profilePictureTapped:(id)arg1;
-(void)seeAllButtonTappedWithView:(id)arg1;
-(void)profilePictureChangeOptionChosen:(int)arg1;
-(void)didTapProfileCompletionNUX;
-(void)didTapTranslateBiography;
-(void)headerViewWantsProfilePeekOverlayHide;
-(void)headerViewWantsEditProfileViewControllerDismissed;

@end

