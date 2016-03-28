

@class UIColor;

@interface IGSpinnerCellConfiguration : NSObject {

	int _style;
	unsigned _position;
	UIColor* _backgroundColor;
	float _alpha;

}

@property (nonatomic,readonly) int style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned position;                      //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) float alpha;                            //@synthesize alpha=_alpha - In the implementation block
-(id)initWithStyle:(int)arg1 position:(unsigned)arg2 backgroundColor:(id)arg3 alpha:(float)arg4 ;
-(UIColor *)backgroundColor;
-(float)alpha;
-(id)init;
-(int)style;
-(unsigned)position;
@end

