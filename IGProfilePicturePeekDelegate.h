

@protocol IGProfilePicturePeekDelegate <NSObject>
@required
-(void)peekOverlayDidPresent:(id)arg1;
-(void)peekOverlayDidDismiss:(id)arg1;
-(void)peekOverlayUserDidTapChange:(id)arg1;
-(void)peekOverlayUserDidTapDismiss:(id)arg1;
-(void)peekOverlayUserDidTapMenu:(id)arg1;

@end

