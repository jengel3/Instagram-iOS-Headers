

@protocol IGPhotoMapReviewDelegate <NSObject>
@required
-(void)onReviewModeCompleted:(id)arg1;
-(void)onReviewModeCanceled;
-(id)user;

@end

