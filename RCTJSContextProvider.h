

@protocol OS_dispatch_semaphore;
#import <Instagram/Instagram-Structs.h>
@class NSObject, NSThread, JSContext;

@interface RCTJSContextProvider : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	char _useCustomJSCLibrary;
	NSThread* _javaScriptThread;
	JSContext* _context;
	RCTJSCWrapper* _jscWrapper;

}
-(id)initWithUseCustomJSCLibrary:(char)arg1 ;
-(RCTJSContextData*)data;
-(void)_createContext;
@end

