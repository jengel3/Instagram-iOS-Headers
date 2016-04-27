

#import <Instagram/Instagram-Structs.h>
@interface IGClusterAnnotationViewLayout : NSObject {

	int _spacing;
	int _fullScreenSquareDimension;
	char _adjustOrigin;
	int _numTiles;
	char _hasShowMoreButton;
	SCD_Struct_IG83 _largeRows;
	SCD_Struct_IG83 _smallRows;

}

@property (assign,nonatomic) SCD_Struct_IG83 largeRows;              //@synthesize largeRows=_largeRows - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG83 smallRows;              //@synthesize smallRows=_smallRows - In the implementation block
+(id)forNumberOfTiles:(int)arg1 withShowMoreButton:(char)arg2 adjustOrigin:(char)arg3 ;
-(id)initWithNumberOfTiles:(int)arg1 withShowMoreButton:(char)arg2 adjustOrigin:(char)arg3 ;
-(CGRect)frameForInfoButton:(char)arg1 ;
-(float)totalWidthInFullScreen:(char)arg1 ;
-(float)totalHeightIncludingShowMoreButton;
-(CGRect)adjustRect:(CGRect)arg1 ;
-(CGRect)frameForFullScreenTile:(int)arg1 ;
-(float)totalWidth;
-(char)shouldRecenterTileInFullScreen;
-(float)totalHeightIncludingInfoButton;
-(CGPoint)centerOfExplodedClusterInView:(id)arg1 ;
-(char)isLargeImage:(int)arg1 ;
-(CGRect)frameForExplodedTile:(int)arg1 ;
-(CGRect)frameForShowMoreButton:(id)arg1 forFullScreen:(char)arg2 ;
-(char)shouldFadeOutOtherTilesInFullScreen;
-(SCD_Struct_IG83)largeRows;
-(void)setLargeRows:(SCD_Struct_IG83)arg1 ;
-(SCD_Struct_IG83)smallRows;
-(void)setSmallRows:(SCD_Struct_IG83)arg1 ;
-(float)totalHeight;
@end

