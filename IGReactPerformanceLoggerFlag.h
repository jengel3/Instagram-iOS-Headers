
#import <UIKit/UIView.h>

@interface IGReactPerformanceLoggerFlag : UIView {

	char _didAppearInWindow;
	char _bridgeDidFinishTransaction;
	char _loggedContentDidAppear;

}
-(void)reactBridgeDidFinishTransaction;
-(void)contentDidAppear;
-(void)logContentDidAppear;
-(void)didMoveToWindow;
@end

