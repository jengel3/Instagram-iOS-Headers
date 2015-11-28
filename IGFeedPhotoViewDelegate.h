

@protocol IGFeedPhotoViewDelegate <NSObject>
@optional
-(void)feedPhotoViewDidTap:(id)arg1;

@required
-(void)feedPhotoViewDidLoadImage:(id)arg1;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1;

@end

