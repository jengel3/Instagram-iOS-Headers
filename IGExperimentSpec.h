
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, IGExperimentGroup;

@interface IGExperimentSpec : NSObject <NSCopying> {

	char _isHoldoutUniverse;
	NSString* _key;
	NSArray* _predefinedGroups;
	NSString* _descriptiveName;
	int _category;
	IGExperimentGroup* _defaultGroup;
	int _experimentType;
	NSString* _associatedHoldoutUniverse;

}

@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * associatedHoldoutUniverse;              //@synthesize associatedHoldoutUniverse=_associatedHoldoutUniverse - In the implementation block
@property (assign,nonatomic) char isHoldoutUniverse;                          //@synthesize isHoldoutUniverse=_isHoldoutUniverse - In the implementation block
@property (assign,nonatomic) int experimentType;                              //@synthesize experimentType=_experimentType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * predefinedGroups;               //@synthesize predefinedGroups=_predefinedGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveName;               //@synthesize descriptiveName=_descriptiveName - In the implementation block
@property (nonatomic,readonly) int category;                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) IGExperimentGroup * defaultGroup;              //@synthesize defaultGroup=_defaultGroup - In the implementation block
+(id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 ;
+(id)experimentSpecWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 booleanValue:(char)arg5 experimentType:(int)arg6 ;
+(id)holdoutExperimentSpecWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 ;
-(NSString *)descriptiveName;
-(NSArray *)predefinedGroups;
-(IGExperimentGroup *)defaultGroup;
-(NSString *)associatedHoldoutUniverse;
-(id)initWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 isSelfHoldoutUniverse:(char)arg7 ;
-(int)experimentType;
-(void)setExperimentType:(int)arg1 ;
-(void)setAssociatedHoldoutUniverse:(NSString *)arg1 ;
-(char)isHoldoutUniverse;
-(void)setIsHoldoutUniverse:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(int)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

