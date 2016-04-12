
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTInvalidating.h>

@class JSContext, NSString;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating> {

	RCTJavaScriptContext* _selfReference;
	JSContext* _context;

}

@property (nonatomic,readonly) JSContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) OpaqueJSContextRef ctx; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSContext:(id)arg1 ;
-(OpaqueJSContextRef)ctx;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(JSContext *)context;
@end

