
#import <Instagram/RCTBridgeMethod.h>

@class NSString, NSDictionary, NSInvocation, NSArray;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod> {

	Class _moduleClass;
	NSInvocation* _invocation;
	NSArray* _argumentBlocks;
	NSString* _methodSignature;
	SEL _selector;
	NSDictionary* _profileArgs;
	NSString* _JSMethodName;
	unsigned _functionType;

}

@property (nonatomic,readonly) Class moduleClass;                            //@synthesize moduleClass=_moduleClass - In the implementation block
@property (nonatomic,readonly) SEL selector; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * JSMethodName;                 //@synthesize JSMethodName=_JSMethodName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * profileArgs; 
@property (nonatomic,readonly) unsigned functionType;                        //@synthesize functionType=_functionType - In the implementation block
-(void)processMethodSignature;
-(id)methodName;
-(void)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3 ;
-(NSString *)JSMethodName;
-(NSDictionary *)profileArgs;
-(id)initWithMethodSignature:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3 ;
-(Class)moduleClass;
-(unsigned)functionType;
-(id)init;
-(NSString *)description;
-(SEL)selector;
@end

