

@protocol RCTViewControllerProtocol <NSObject>
@property (nonatomic,readonly) id<UILayoutSupport> currentTopLayoutGuide; 
@property (nonatomic,readonly) id<UILayoutSupport> currentBottomLayoutGuide; 
@required
-(id<UILayoutSupport>)currentTopLayoutGuide;
-(id<UILayoutSupport>)currentBottomLayoutGuide;

@end

