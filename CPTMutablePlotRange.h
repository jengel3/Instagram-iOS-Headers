
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlotRange.h>

@class NSNumber;

@interface CPTMutablePlotRange : CPTPlotRange

@property (assign,nonatomic) char inValueUpdate; 
@property (nonatomic,retain) NSNumber * location; 
@property (nonatomic,retain) NSNumber * length; 
@property (assign,nonatomic) SCD_Struct_CP137 locationDecimal; 
@property (assign,nonatomic) SCD_Struct_CP137 lengthDecimal; 
@property (assign,nonatomic) double locationDouble; 
@property (assign,nonatomic) double lengthDouble; 
-(void)intersectionPlotRange:(id)arg1 ;
-(void)unionPlotRange:(id)arg1 ;
-(void)expandRangeByFactor:(id)arg1 ;
-(void)shiftLocationToFitInRange:(id)arg1 ;
-(void)shiftEndToFitInRange:(id)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setLocation:(NSNumber *)arg1 ;
@end

