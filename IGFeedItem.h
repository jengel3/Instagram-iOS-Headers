
#import <Instagram/IGPost.h>
#import <Instagram/IGStoredObject.h>

@class IGUsertagGroup, NSString, NSNumber, IGSponsoredPostInfo, IGPivotMediaInfo, IGPostItem, IGDirectResponseInfo, IGCommentModel;

@interface IGFeedItem : IGPost <IGStoredObject> {

	IGUsertagGroup* _usertags;
	char _inPhotosOfYou;
	char _isHidden;
	char _isWaitingForPivot;
	char _showPivot;
	char _carouselLinkButtonOverride;
	char _expanded;
	NSString* _permalink;
	NSString* _exploreAlgorithm;
	NSString* _exploreImpressionToken;
	NSString* _mediaId;
	int _directResponseStyle;
	int _directResponseHeaderStyle;
	NSNumber* _iTunesItemIdentifier;
	IGSponsoredPostInfo* _sponsoredPostInfo;
	NSString* _organicTrackingToken;
	int _promotionState;
	IGPivotMediaInfo* _pivotInfo;

}

@property (nonatomic,copy,readonly) NSString * ig_productSessionKey; 
@property (nonatomic,readonly) IGPostItem * firstItem; 
@property (nonatomic,readonly) IGPostItem * lastItem; 
@property (copy,readonly) NSString * permalink;                                   //@synthesize permalink=_permalink - In the implementation block
@property (readonly) char inPhotosOfYou;                                          //@synthesize inPhotosOfYou=_inPhotosOfYou - In the implementation block
@property (readonly) NSString * exploreAlgorithm;                                 //@synthesize exploreAlgorithm=_exploreAlgorithm - In the implementation block
@property (readonly) NSString * exploreImpressionToken;                           //@synthesize exploreImpressionToken=_exploreImpressionToken - In the implementation block
@property (assign) char isHidden;                                                 //@synthesize isHidden=_isHidden - In the implementation block
@property (assign) char isWaitingForPivot;                                        //@synthesize isWaitingForPivot=_isWaitingForPivot - In the implementation block
@property (assign) char showPivot;                                                //@synthesize showPivot=_showPivot - In the implementation block
@property (readonly) NSString * mediaId;                                          //@synthesize mediaId=_mediaId - In the implementation block
@property (readonly) IGDirectResponseInfo * directResponseInfo; 
@property (readonly) int directResponseStyle;                                     //@synthesize directResponseStyle=_directResponseStyle - In the implementation block
@property (readonly) int directResponseHeaderStyle;                               //@synthesize directResponseHeaderStyle=_directResponseHeaderStyle - In the implementation block
@property (readonly) NSNumber * iTunesItemIdentifier;                             //@synthesize iTunesItemIdentifier=_iTunesItemIdentifier - In the implementation block
@property (readonly) IGSponsoredPostInfo * sponsoredPostInfo;                     //@synthesize sponsoredPostInfo=_sponsoredPostInfo - In the implementation block
@property (copy) NSString * organicTrackingToken;                                 //@synthesize organicTrackingToken=_organicTrackingToken - In the implementation block
@property (readonly) IGCommentModel * headline; 
@property (readonly) char isDirectResponse; 
@property (readonly) char isAdsCarousel; 
@property (readonly) char hasBeenPromoted; 
@property (readonly) int promotionState;                                          //@synthesize promotionState=_promotionState - In the implementation block
@property (assign) char carouselLinkButtonOverride;                               //@synthesize carouselLinkButtonOverride=_carouselLinkButtonOverride - In the implementation block
@property (retain) IGPivotMediaInfo * pivotInfo;                                  //@synthesize pivotInfo=_pivotInfo - In the implementation block
@property (assign) char expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
-(id)firstUnseenItemNewerThan:(id)arg1 ;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(char)isDirectResponse;
-(IGDirectResponseInfo *)directResponseInfo;
-(int)directResponseStyle;
-(void)setPromotedState:(int)arg1 ;
-(NSString *)mediaId;
-(int)directResponseHeaderStyle;
-(id)usertags;
-(id)urlToPostComment;
-(id)urlToDeleteComment:(id)arg1 ;
-(id)urlToFlagComment:(id)arg1 ;
-(id)buildLikeCellStyledStringForNoneLikeString:(id)arg1 ;
-(id)buildLikeCellStyledStringWithIcon:(id)arg1 andText:(id)arg2 ;
-(id)bylineStyleString;
-(id)boomerangStyleStringC;
-(id)grayStyleString;
-(id)featuredBadgeText;
-(id)defaultStyleString;
-(id)viewCountTextWithUrl;
-(id)simplifiedLikeText;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAndShowPivotIfNeededForRequestEntry:(int)arg1 ;
-(NSString *)exploreAlgorithm;
-(NSString *)exploreImpressionToken;
-(IGPivotMediaInfo *)pivotInfo;
-(void)fetchPivotsWithRequestEntry:(int)arg1 ;
-(void)setPivotInfo:(IGPivotMediaInfo *)arg1 ;
-(void)setIsWaitingForPivot:(char)arg1 ;
-(char)showPivot;
-(char)isAdsCarousel;
-(char)carouselLinkButtonOverride;
-(id)buildLikersStyledString;
-(id)buildBoomerangContextString;
-(id)buildMoreCommentsStyledString;
-(id)buildHyperlapseContextString;
-(id)buildLayoutContextString;
-(id)buildExploreContextString;
-(id)buildFeaturedBadgeStyledString;
-(id)buildViewCountStyledString;
-(id)buildTimestampContextStringWithExplore:(char)arg1 ;
-(id)buildShortFormatTimestamp;
-(int)promotionState;
-(NSString *)permalink;
-(char)hasBeenPromoted;
-(void)deleteItem;
-(void)deletePostItemFromItem:(id)arg1 ;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 analyticsModule:(id)arg7 requestSourceParams:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)setCarouselLinkButtonOverride:(char)arg1 ;
-(void)markAsExpanded;
-(char)isSponsoredApp;
-(NSString *)ig_productSessionKey;
-(void)setMediaIdWithPk:(id)arg1 ;
-(void)setUsertagsFromEntry:(id)arg1 ;
-(void)setSponsoredPostInfoFromEntry:(id)arg1 ;
-(int)promotionStateFromString:(id)arg1 ;
-(id)mediaIdFromPK:(id)arg1 ;
-(char)isWaitingForPivot;
-(void)setShowPivot:(char)arg1 ;
-(char)hasPivot;
-(void)setOrganicTrackingToken:(NSString *)arg1 ;
-(NSString *)organicTrackingToken;
-(id)viewCountText;
-(id)likeText;
-(void)setInPhotosOfYou:(char)arg1 ;
-(char)inPhotosOfYou;
-(IGCommentModel *)headline;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isHidden;
-(NSString *)description;
-(IGPostItem *)firstItem;
-(char)isExpanded;
-(void)setIsHidden:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(IGPostItem *)lastItem;
-(NSNumber *)iTunesItemIdentifier;
-(char)updateWithDictionary:(id)arg1 ;
@end

