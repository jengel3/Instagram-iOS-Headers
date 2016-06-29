
@class UIView;


@protocol IGViewControllerSlideable <NSObject>
@property (nonatomic,readonly) UIView * contentContainerView; 
@property (nonatomic,readonly) UIView * overlayView; 
@required
-(UIView *)contentContainerView;
-(UIView *)overlayView;

@end

