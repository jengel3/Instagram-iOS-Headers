

@class NSString, NSDictionary;

@interface IGExperimentUserGroup : NSObject {

	NSString* _name;
	NSDictionary* _parameters;
	int _experimentType;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) int experimentType;                     //@synthesize experimentType=_experimentType - In the implementation block
-(id)initWithName:(id)arg1 parameters:(id)arg2 experimentType:(int)arg3 ;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(int)experimentType;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)parameters;
@end

