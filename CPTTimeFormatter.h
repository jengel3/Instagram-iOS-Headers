
#import <Instagram/Instagram-Structs.h>
#import <Foundation/NSNumberFormatter.h>

@class NSDateFormatter, NSDate;

@interface CPTTimeFormatter : NSNumberFormatter {

	NSDateFormatter* dateFormatter;
	NSDate* referenceDate;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter; 
@property (nonatomic,copy) NSDate * referenceDate; 
-(id)initWithDateFormatter:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

