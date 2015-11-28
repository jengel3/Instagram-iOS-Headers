
#import <Instagram/IGActionSheetDelegate.h>

@class NSString;

@interface IGActionSheetCallbackProxy : NSObject <IGActionSheetDelegate> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithCallback:(/*^block*/id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

