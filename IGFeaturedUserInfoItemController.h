
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGFollowPeopleLoggerProtocol;
@class IGFeaturedUserInfo, NSString;

@interface IGFeaturedUserInfoItemController : IGListItemController <IGExploreCellDelegate, IGListItemType> {

	IGFeaturedUserInfo* _featuredUserInfo;
	unsigned _maxThumbnails;
	id<IGFollowPeopleLoggerProtocol> _logger;

}

@property (nonatomic,readonly) IGFeaturedUserInfo * featuredUserInfo;                //@synthesize featuredUserInfo=_featuredUserInfo - In the implementation block
@property (nonatomic,readonly) unsigned maxThumbnails;                               //@synthesize maxThumbnails=_maxThumbnails - In the implementation block
@property (nonatomic,readonly) id<IGFollowPeopleLoggerProtocol> logger;              //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)updateCellVisibility:(id)arg1 imageView:(id)arg2 mediaIndex:(unsigned)arg3 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapDismiss:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(unsigned)maxThumbnails;
-(void)friendStatusChanged:(id)arg1 ;
-(IGFeaturedUserInfo *)featuredUserInfo;
-(id)exploreViewModelInWidth:(float)arg1 ;
-(id)initWithLogger:(id)arg1 maxThumbnails:(unsigned)arg2 ;
-(id<IGFollowPeopleLoggerProtocol>)logger;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

