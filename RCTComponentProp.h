

@class NSString;

@interface RCTComponentProp : NSObject {

	NSString* _type;
	/*^block*/id _propBlock;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id propBlock;                          //@synthesize propBlock=_propBlock - In the implementation block
-(id)propBlock;
-(void)setPropBlock:(id)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
@end

