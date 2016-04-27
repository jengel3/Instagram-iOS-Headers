
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTInvalidating.h>

@class NSThread, JSContext, NSString;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating> {

	RCTJavaScriptContext* _selfReference;
	NSThread* _javaScriptThread;
	JSContext* _context;

}

@property (nonatomic,readonly) JSContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) OpaqueJSContextRef ctx; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSContext:(id)arg1 onThread:(id)arg2 ;
-(OpaqueJSContextRef)ctx;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(JSContext *)context;
@end

