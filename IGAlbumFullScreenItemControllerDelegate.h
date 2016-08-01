

@protocol IGAlbumFullScreenItemControllerDelegate <NSObject>
@required
-(void)fullscreenItemController:(id)arg1 willUpdateFromAlbumModel:(id)arg2 toAlbumModel:(id)arg3 albumItem:(id)arg4;
-(void)fullscreenItemController:(id)arg1 didChangeItemWithNavigationAction:(int)arg2;
-(char)fullscreenItemControllerCanResumePlayback:(id)arg1;
-(void)fullscreenItemController:(id)arg1 didMarkItemAsSeen:(id)arg2;
-(void)fullscreenItemController:(id)arg1 didAdvancePastLastItemWithNavigationAction:(int)arg2;
-(void)fullscreenItemController:(id)arg1 didRewindPastFirstItemWithNavigationAction:(int)arg2;
-(void)fullscreenItemControllerDidTapDismiss:(id)arg1;

@end

