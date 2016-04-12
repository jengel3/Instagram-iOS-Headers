
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface IGDate : NSObject <NSCoding> {

	NSDate* _date;
	long long _microseconds;

}

@property (nonatomic,readonly) long long microseconds;                    //@synthesize microseconds=_microseconds - In the implementation block
@property (nonatomic,readonly) double timeIntervalSince1970; 
@property (nonatomic,readonly) NSDate * date;                             //@synthesize date=_date - In the implementation block
+(id)date;
-(id)initWithMicroseconds:(long long)arg1 ;
-(long long)microseconds;
-(id)initWithDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(double)timeIntervalSince1970;
-(id)initWithTimeInterval:(double)arg1 ;
@end

