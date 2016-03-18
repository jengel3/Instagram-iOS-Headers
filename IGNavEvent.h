

#import <Instagram/Instagram-Structs.h>
@class NSString;

@interface IGNavEvent : NSObject {

	NSString* _moduleName;

}

@property (nonatomic,copy,readonly) NSString * moduleName;              //@synthesize moduleName=_moduleName - In the implementation block
-(NSString *)moduleName;
-(id)initWithModuleName:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

