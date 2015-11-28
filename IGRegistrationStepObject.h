
@class UIView, IGRegistrationNavigationBar;


@protocol IGRegistrationStepObject <NSObject>
@property (nonatomic,readonly) UIView * stepView; 
@property (nonatomic,readonly) IGRegistrationNavigationBar * navBar; 
@property (nonatomic,readonly) UIView * iconView; 
@optional
-(void)setIsVerifying:(char)arg1;
-(void)stepViewWasTapped;

@required
-(UIView *)stepView;
-(void)stepViewWillAppear;
-(UIView *)iconView;
-(IGRegistrationNavigationBar *)navBar;

@end

