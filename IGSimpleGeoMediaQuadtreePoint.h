
#import <Instagram/QuadtreePoint.h>

@class IGSimpleGeoMedia;

@interface IGSimpleGeoMediaQuadtreePoint : QuadtreePoint

@property (assign,nonatomic,__weak) IGSimpleGeoMedia * media; 
-(id)init:(id)arg1 ;
-(IGSimpleGeoMedia *)media;
-(void)setMedia:(IGSimpleGeoMedia *)arg1 ;
@end

