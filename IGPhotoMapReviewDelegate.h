

@protocol IGPhotoMapReviewDelegate <NSObject>
@required
-(void)onReviewModeCanceled;
-(void)onReviewModeCompleted:(id)arg1;
-(id)user;

@end

