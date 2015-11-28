
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface FBRequestConnectionRetryManagerAlertViewHelper : NSObject <UIAlertViewDelegate> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

