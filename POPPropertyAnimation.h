
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) float roundingFactor; 
@property (assign,nonatomic) unsigned clampMode; 
@property (assign,getter=isAdditive,nonatomic) char additive; 
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(float)roundingFactor;
-(void)setRoundingFactor:(float)arg1 ;
-(unsigned)clampMode;
-(void)setClampMode:(unsigned)arg1 ;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(id)currentValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fromValue;
-(void)setAdditive:(char)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(char)isAdditive;
-(POPAnimatableProperty *)property;
@end

