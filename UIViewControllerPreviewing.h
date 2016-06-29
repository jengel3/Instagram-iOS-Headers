
@class UIGestureRecognizer, UIView;


@protocol UIViewControllerPreviewing <NSObject>
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@required
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;

@end

