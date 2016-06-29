
#import <Instagram/Instagram-Structs.h>
#import <Foundation/NSNumberFormatter.h>

@class NSDateFormatter, NSDate, NSCalendar;

@interface CPTCalendarFormatter : NSNumberFormatter {

	NSDateFormatter* dateFormatter;
	NSDate* referenceDate;
	NSCalendar* referenceCalendar;
	unsigned referenceCalendarUnit;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter; 
@property (nonatomic,copy) NSDate * referenceDate; 
@property (nonatomic,copy) NSCalendar * referenceCalendar; 
@property (assign,nonatomic) unsigned referenceCalendarUnit; 
-(id)initWithDateFormatter:(id)arg1 ;
-(NSCalendar *)referenceCalendar;
-(unsigned)referenceCalendarUnit;
-(void)setReferenceCalendar:(NSCalendar *)arg1 ;
-(void)setReferenceCalendarUnit:(unsigned)arg1 ;
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

