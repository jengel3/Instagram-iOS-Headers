
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id readBlock; 
@property (nonatomic,copy,readonly) id writeBlock; 
@property (nonatomic,readonly) float threshold; 
+(id)propertyWithName:(id)arg1 ;
+(id)propertyWithName:(id)arg1 initializer:(/*^block*/id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

