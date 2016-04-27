

@class NSString, NSDictionary;

@interface IGExperimentGroup : NSObject {

	NSString* _name;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)parameters;
@end

