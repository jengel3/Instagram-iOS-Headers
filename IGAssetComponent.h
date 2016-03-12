

#import <Instagram/Instagram-Structs.h>
@class UIBezierPath, IGPathStyleSet;

@interface IGAssetComponent : NSObject {

	UIBezierPath* _path;
	IGPathStyleSet* _style;
	CGPoint _position;

}

@property (nonatomic,retain) UIBezierPath * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) IGPathStyleSet * style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGPoint position;                    //@synthesize position=_position - In the implementation block
-(UIBezierPath *)path;
-(IGPathStyleSet *)style;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setStyle:(IGPathStyleSet *)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

