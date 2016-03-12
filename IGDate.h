
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString;

@interface IGDate : NSObject <NSCoding> {

	NSDate* _date;
	long long _microseconds;

}

@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long microseconds;                   //@synthesize microseconds=_microseconds - In the implementation block
-(id)initWithMicroseconds:(long long)arg1 ;
-(long long)microseconds;
-(id)initWithDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(double)timeIntervalSince1970;
-(id)initWithObject:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
@end

