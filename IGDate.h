
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGDate : NSObject <NSCoding> {

	long long _microseconds;

}

@property (nonatomic,readonly) long long microseconds;                   //@synthesize microseconds=_microseconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(long long)microseconds;
-(id)initWithMicroseconds:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)date;
-(double)timeIntervalSinceNow;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(double)timeIntervalSince1970;
-(id)initWithObject:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end

