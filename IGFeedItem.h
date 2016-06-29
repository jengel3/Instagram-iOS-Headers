
#import <Instagram/IGPost.h>
#import <Instagram/IGStoredObject.h>

@class IGUsertagGroup, NSArray, NSString, NSNumber, IGSponsoredPostInfo, IGDirectResponseInfo, IGCommentModel;

@interface IGFeedItem : IGPost <IGStoredObject> {

	IGUsertagGroup* _usertags;
	NSArray* _previewCommentsInFeed;
	char _inPhotosOfYou;
	char _isHidden;
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
	int _translationState;

}

@property (nonatomic,copy,readonly) NSString * ig_productSessionKey; 
@property (nonatomic,readonly) NSString * albumChannelPK; 
@property (assign) char expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (copy,readonly) NSString * permalink;                                   //@synthesize permalink=_permalink - In the implementation block
@property (readonly) char inPhotosOfYou;                                          //@synthesize inPhotosOfYou=_inPhotosOfYou - In the implementation block
@property (readonly) NSString * exploreAlgorithm;                                 //@synthesize exploreAlgorithm=_exploreAlgorithm - In the implementation block
@property (readonly) NSString * exploreImpressionToken;                           //@synthesize exploreImpressionToken=_exploreImpressionToken - In the implementation block
@property (assign) char isHidden;                                                 //@synthesize isHidden=_isHidden - In the implementation block
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
@property (assign) int translationState;                                          //@synthesize translationState=_translationState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
-(NSString *)albumChannelPK;
-(int)directResponseStyle;
-(IGDirectResponseInfo *)directResponseInfo;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(char)isDirectResponse;
-(void)setPromotedState:(int)arg1 ;
-(int)directResponseHeaderStyle;
-(id)usertags;
-(id)buildLikeCellStyledStringForNoneLikeString:(id)arg1 ;
-(id)buildLikeCellStyledStringWithIcon:(id)arg1 andText:(id)arg2 style:(id)arg3 ;
-(id)bylineStyleString;
-(id)boomerangStyleStringC;
-(id)grayStyleString;
-(id)featuredBadgeText;
-(id)defaultStyleString;
-(id)viewCountTextWithUrl;
-(id)boldLinkedStringForUser:(id)arg1 ;
-(id)simplifiedLikeText;
-(id)defaultLikeCellStyle;
-(id)buildViewCountStyledStringWithStyle:(id)arg1 ;
-(id)defaultMoreCommentStyle;
-(id)buildMoreCommentsStyledStringWithStyle:(id)arg1 ;
-(NSString *)exploreAlgorithm;
-(NSString *)exploreImpressionToken;
-(NSString *)mediaId;
-(char)isAdsCarousel;
-(char)carouselLinkButtonOverride;
-(id)buildLikersStyledString;
-(id)buildBoomerangContextString;
-(id)buildHyperlapseContextString;
-(id)buildLayoutContextString;
-(id)buildExploreContextString;
-(id)buildFeaturedBadgeStyledString;
-(id)buildTimestampContextStringWithExplore:(char)arg1 ;
-(id)buildSocialContextString;
-(id)buildTranslationStyledStringWithExplore:(char)arg1 ;
-(id)buildShortFormatTimestamp;
-(id)previewCommentsInFeed;
-(NSString *)permalink;
-(char)hasBeenPromoted;
-(void)deleteItem;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 analyticsModule:(id)arg7 requestSourceParams:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)setCarouselLinkButtonOverride:(char)arg1 ;
-(void)markAsExpanded;
-(int)translationState;
-(void)setTranslationState:(int)arg1 ;
-(NSString *)ig_productSessionKey;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setMediaIdWithPk:(id)arg1 ;
-(void)setUsertagsFromEntry:(id)arg1 ;
-(void)setSponsoredPostInfoFromEntry:(id)arg1 ;
-(int)promotionStateFromString:(id)arg1 ;
-(id)mediaIdFromPK:(id)arg1 ;
-(void)setInPhotosOfYou:(char)arg1 ;
-(char)isSponsoredApp;
-(void)deletePostItemFromItem:(id)arg1 ;
-(void)setOrganicTrackingToken:(NSString *)arg1 ;
-(NSString *)organicTrackingToken;
-(id)viewCountText;
-(id)likeText;
-(int)promotionState;
-(char)inPhotosOfYou;
-(IGCommentModel *)headline;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isHidden;
-(NSString *)description;
-(char)isExpanded;
-(void)setIsHidden:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(NSNumber *)iTunesItemIdentifier;
-(char)updateWithDictionary:(id)arg1 ;
@end

