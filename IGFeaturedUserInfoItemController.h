
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGExploreCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGRaindropAnalyticsDelegate;
@class IGFeaturedUserInfo, NSString;

@interface IGFeaturedUserInfoItemController : IGListItemController <IGExploreCellDelegate, IGListItemType> {

	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	IGFeaturedUserInfo* _featuredUserInfo;
	unsigned _maxThumbnails;

}

@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * featuredUserInfo;                               //@synthesize featuredUserInfo=_featuredUserInfo - In the implementation block
@property (nonatomic,readonly) unsigned maxThumbnails;                                              //@synthesize maxThumbnails=_maxThumbnails - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(unsigned)maxThumbnails;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2 ;
-(void)updateCellVisibility:(id)arg1 imageView:(id)arg2 mediaIndex:(unsigned)arg3 ;
-(void)exploreCellDidTapFollow:(id)arg1 ;
-(void)exploreCellDidTapFollowing:(id)arg1 ;
-(void)friendStatusChanged:(id)arg1 ;
-(IGFeaturedUserInfo *)featuredUserInfo;
-(id)exploreViewModelInWidth:(float)arg1 ;
-(id)initWithFeaturedUserInfo:(id)arg1 maxThumbnails:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

