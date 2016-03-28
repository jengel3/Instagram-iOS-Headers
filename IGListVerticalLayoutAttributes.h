
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface IGListVerticalLayoutAttributes : UICollectionViewLayoutAttributes {

	char _isOriginEstimated;
	char _isSizeEstimated;

}

@property (nonatomic,readonly) char isEstimated; 
@property (assign,nonatomic) char isOriginEstimated;              //@synthesize isOriginEstimated=_isOriginEstimated - In the implementation block
@property (assign,nonatomic) char isSizeEstimated;                //@synthesize isSizeEstimated=_isSizeEstimated - In the implementation block
@property (assign,nonatomic) CGPoint origin; 
+(id)layoutAttributesForHeaderViewWithIndexPath:(id)arg1 ;
-(char)isOriginEstimated;
-(char)isSizeEstimated;
-(void)setIsOriginEstimated:(char)arg1 ;
-(void)setIsSizeEstimated:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(char)isEstimated;
@end

