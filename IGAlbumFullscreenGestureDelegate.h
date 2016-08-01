

@protocol IGAlbumFullscreenGestureDelegate <NSObject>
@required
-(void)fullscreenOverlayDidSwipeUp:(id)arg1;
-(void)fullscreenOverlayDidBeginPressing:(id)arg1;
-(void)fullscreenOverlayDidTapLeft:(id)arg1;
-(void)fullscreenOverlayDidTapRight:(id)arg1;
-(void)fullscreenOverlayDidEndPressing:(id)arg1;

@end

