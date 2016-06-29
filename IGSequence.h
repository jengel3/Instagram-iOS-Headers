
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGSequence : NSObject <NSCopying> {

	NSString* _sequenceString;

}

@property (nonatomic,copy,readonly) NSString * sequenceString;              //@synthesize sequenceString=_sequenceString - In the implementation block
-(NSString *)sequenceString;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
@end

