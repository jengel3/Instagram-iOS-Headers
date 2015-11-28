
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface IGFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	char _isPinnedHeader;
	char _willBecomePinnedHeader;

}

@property (assign,nonatomic) char isPinnedHeader;                      //@synthesize isPinnedHeader=_isPinnedHeader - In the implementation block
@property (assign,nonatomic) char willBecomePinnedHeader;              //@synthesize willBecomePinnedHeader=_willBecomePinnedHeader - In the implementation block
-(void)setWillBecomePinnedHeader:(char)arg1 ;
-(void)setIsPinnedHeader:(char)arg1 ;
-(char)isPinnedHeader;
-(char)willBecomePinnedHeader;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

