
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPTPlotRange, CPTFill;

@interface CPTLimitBand : NSObject <NSCoding, NSCopying> {

	CPTPlotRange* range;
	CPTFill* fill;

}

@property (nonatomic,retain) CPTPlotRange * range; 
@property (nonatomic,retain) CPTFill * fill; 
+(id)limitBandWithRange:(id)arg1 fill:(id)arg2 ;
-(id)initWithRange:(id)arg1 fill:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPTFill *)fill;
-(CPTPlotRange *)range;
-(void)setRange:(CPTPlotRange *)arg1 ;
-(void)setFill:(CPTFill *)arg1 ;
@end

