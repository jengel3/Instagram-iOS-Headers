
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGAlbumItemType.h>
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGMediaPreloaderItem.h>
#import <Instagram/IGCommentModelDelegate.h>
#import <Instagram/IGDKDiffable.h>
#import <Instagram/IGFeedItemProtocol.h>
#import <Instagram/IGStoredObject.h>

@class IGUsertagGroup, NSArray, IGUser, IGDate, IGLocation, CLLocation, NSMutableOrderedSet, NSNumber, IGCommentModel, NSOrderedSet, NSString, IGFeedItemCollaboration, NSURL, IGFeedItemFeaturedBadge, IGSponsoredPostInfo, NSMutableDictionary, IGPhoto, IGVideo, IGDirectResponseInfo;

@interface IGFeedItem : IGStorableObject <IGAlbumItemType, IGDirectUploadableProducer, IGMediaPreloaderItem, IGCommentModelDelegate, IGDKDiffable, IGFeedItemProtocol, IGStoredObject> {

	IGUsertagGroup* _usertags;
	NSArray* _previewCommentsInFeed;
	char _hasLiked;
	char _captionIsEdited;
	char _moreCommentsAvailable;
	char _collapseComments;
	char _needsFetch;
	char _inPhotosOfYou;
	char _isHidden;
	char _isReelMedia;
	char _carouselLinkButtonOverride;
	char _expanded;
	int _mediaType;
	IGUser* _user;
	IGDate* _takenAtDate;
	IGDate* _expiringAtDate;
	IGLocation* _location;
	CLLocation* _mediaCoord;
	NSMutableOrderedSet* _likers;
	int _likeCount;
	NSNumber* _viewCount;
	IGCommentModel* _caption;
	NSOrderedSet* _viewers;
	int _viewerCount;
	NSString* _commentCursor;
	int _commentCount;
	NSArray* _allComments;
	IGDate* _lastCommentTimeStamp;
	IGDate* _lastReadTimeStamp;
	NSString* _exploreContext;
	NSString* _exploreSourceToken;
	int _attribution;
	NSArray* _items;
	IGFeedItemCollaboration* _collaboration;
	int _linkStyle;
	NSURL* _link;
	IGFeedItemFeaturedBadge* _featuredBadge;
	int _numCommentInPreview;
	NSString* _socialContext;
	NSArray* _topComments;
	NSArray* _previewComments;
	NSNumber* _insightsImpressionCount;
	NSNumber* _insightsReachCount;
	NSNumber* _insightsEngagementCount;
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
	NSMutableDictionary* _pendingComments;
	NSArray* _activeComments;

}

@property (nonatomic,copy,readonly) NSString * ig_productSessionKey; 
@property (nonatomic,readonly) NSString * albumChannelPK; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (retain) NSMutableDictionary * pendingComments;                         //@synthesize pendingComments=_pendingComments - In the implementation block
@property (copy) NSString * commentCursor;                                        //@synthesize commentCursor=_commentCursor - In the implementation block
@property (assign) char moreCommentsAvailable;                                    //@synthesize moreCommentsAvailable=_moreCommentsAvailable - In the implementation block
@property (assign) char captionIsEdited;                                          //@synthesize captionIsEdited=_captionIsEdited - In the implementation block
@property (assign) int numCommentInPreview;                                       //@synthesize numCommentInPreview=_numCommentInPreview - In the implementation block
@property (assign) char collapseComments;                                         //@synthesize collapseComments=_collapseComments - In the implementation block
@property (retain) IGCommentModel * caption;                                      //@synthesize caption=_caption - In the implementation block
@property (retain) NSArray * activeComments;                                      //@synthesize activeComments=_activeComments - In the implementation block
@property (retain) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (retain) IGFeedItemCollaboration * collaboration;                       //@synthesize collaboration=_collaboration - In the implementation block
@property (readonly) int mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) IGPhoto * photo; 
@property (readonly) IGVideo * video; 
@property (readonly) IGUser * user;                                               //@synthesize user=_user - In the implementation block
@property (readonly) IGDate * takenAtDate;                                        //@synthesize takenAtDate=_takenAtDate - In the implementation block
@property (readonly) IGDate * expiringAtDate;                                     //@synthesize expiringAtDate=_expiringAtDate - In the implementation block
@property (readonly) IGLocation * location;                                       //@synthesize location=_location - In the implementation block
@property (readonly) CLLocation * mediaCoord;                                     //@synthesize mediaCoord=_mediaCoord - In the implementation block
@property (readonly) NSMutableOrderedSet * likers;                                //@synthesize likers=_likers - In the implementation block
@property (readonly) int likeCount;                                               //@synthesize likeCount=_likeCount - In the implementation block
@property (readonly) NSNumber * viewCount;                                        //@synthesize viewCount=_viewCount - In the implementation block
@property (readonly) char hasLiked;                                               //@synthesize hasLiked=_hasLiked - In the implementation block
@property (readonly) NSOrderedSet * viewers;                                      //@synthesize viewers=_viewers - In the implementation block
@property (readonly) int viewerCount;                                             //@synthesize viewerCount=_viewerCount - In the implementation block
@property (readonly) int commentCount;                                            //@synthesize commentCount=_commentCount - In the implementation block
@property (readonly) NSArray * allComments;                                       //@synthesize allComments=_allComments - In the implementation block
@property (retain) IGDate * lastCommentTimeStamp;                                 //@synthesize lastCommentTimeStamp=_lastCommentTimeStamp - In the implementation block
@property (retain) IGDate * lastReadTimeStamp;                                    //@synthesize lastReadTimeStamp=_lastReadTimeStamp - In the implementation block
@property (copy,readonly) NSString * exploreContext;                              //@synthesize exploreContext=_exploreContext - In the implementation block
@property (copy,readonly) NSString * exploreSourceToken;                          //@synthesize exploreSourceToken=_exploreSourceToken - In the implementation block
@property (readonly) int attribution;                                             //@synthesize attribution=_attribution - In the implementation block
@property (readonly) int linkStyle;                                               //@synthesize linkStyle=_linkStyle - In the implementation block
@property (readonly) NSURL * link;                                                //@synthesize link=_link - In the implementation block
@property (retain) IGFeedItemFeaturedBadge * featuredBadge;                       //@synthesize featuredBadge=_featuredBadge - In the implementation block
@property (copy,readonly) NSString * socialContext;                               //@synthesize socialContext=_socialContext - In the implementation block
@property (readonly) NSArray * topComments;                                       //@synthesize topComments=_topComments - In the implementation block
@property (readonly) NSArray * previewComments;                                   //@synthesize previewComments=_previewComments - In the implementation block
@property (retain) NSNumber * insightsImpressionCount;                            //@synthesize insightsImpressionCount=_insightsImpressionCount - In the implementation block
@property (retain) NSNumber * insightsReachCount;                                 //@synthesize insightsReachCount=_insightsReachCount - In the implementation block
@property (retain) NSNumber * insightsEngagementCount;                            //@synthesize insightsEngagementCount=_insightsEngagementCount - In the implementation block
@property (assign,nonatomic) char needsFetch;                                     //@synthesize needsFetch=_needsFetch - In the implementation block
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
@property (readonly) char isReelMedia;                                            //@synthesize isReelMedia=_isReelMedia - In the implementation block
@property (readonly) char isDirectResponse; 
@property (readonly) char isAdsCarousel; 
@property (readonly) char hasBeenPromoted; 
@property (readonly) int promotionState;                                          //@synthesize promotionState=_promotionState - In the implementation block
@property (assign) char carouselLinkButtonOverride;                               //@synthesize carouselLinkButtonOverride=_carouselLinkButtonOverride - In the implementation block
@property (assign) int translationState;                                          //@synthesize translationState=_translationState - In the implementation block
+(CGSize)sizeForPhoto:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(id)centralizedStore;
+(CGSize)sizeForMediaAspectRatio:(CGSize)arg1 normalizedToViewWidth:(float)arg2 ;
+(CGSize)sizeForVideo:(id)arg1 normalizedToViewWidth:(float)arg2 ;
+(id)pkFromShortcode:(id)arg1 ;
+(id)hmacFromShortcode:(id)arg1 ;
+(id)encodedPkFromShortcode:(id)arg1 ;
+(long long)decodePk:(id)arg1 ;
+(void)reportSpamMediaID:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)reportInappropriateMediaID:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(IGDate *)expiringAtDate;
-(NSString *)albumChannelPK;
-(IGDate *)takenAtDate;
-(id)diffIdentifier;
-(int)viewerCount;
-(NSOrderedSet *)viewers;
-(id)feedItem;
-(id)pendingUpload;
-(int)directResponseStyle;
-(IGDirectResponseInfo *)directResponseInfo;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(char)isDirectResponse;
-(void)setPromotedState:(int)arg1 ;
-(int)directResponseHeaderStyle;
-(id)usertags;
-(id)ig_summaryForAccessibilityLabel;
-(void)commentPostRequestStarted:(id)arg1 ;
-(void)commentPostRequestFinished:(id)arg1 ;
-(void)commentPostRequestFailedSpam:(id)arg1 ;
-(void)commentPostRequestFailed:(id)arg1 ;
-(void)commentRemoveRequestFailed:(id)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 ;
-(void)commentRemoveRequestStarted:(id)arg1 ;
-(void)fetchCommentsWithLoadMore:(char)arg1 allowCaptionOverwrite:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)filteredActiveComments;
-(char)allowDirectSharing;
-(NSArray *)topComments;
-(char)moreCommentsAvailable;
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
-(id)uploadableModelWithParameter:(id)arg1 ;
-(CGSize)sizeForMediaNormalizedToViewWidth:(float)arg1 ;
-(char)shouldDisableVideoIndicator;
-(id)defaultLikeCellStyle;
-(id)buildViewCountStyledStringWithStyle:(id)arg1 ;
-(id)defaultMoreCommentStyle;
-(id)buildMoreCommentsStyledStringWithStyle:(id)arg1 ;
-(NSString *)mediaId;
-(NSString *)exploreAlgorithm;
-(char)needsFetch;
-(char)postIsBroken;
-(id)ig_accessibilityLabel;
-(unsigned long long)ig_accessibilityTraits;
-(CLLocation *)mediaCoord;
-(char)isAdsCarousel;
-(char)carouselLinkButtonOverride;
-(void)markAsExpanded;
-(int)translationState;
-(void)setTranslationState:(int)arg1 ;
-(char)hasBeenPromoted;
-(char)hasLiked;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 analyticsModule:(id)arg7 requestSourceParams:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)setCarouselLinkButtonOverride:(char)arg1 ;
-(NSArray *)allComments;
-(NSString *)ig_productSessionKey;
-(id)buildLikersStyledString;
-(id)buildBoomerangContextString;
-(id)buildHyperlapseContextString;
-(id)buildLayoutContextString;
-(id)buildExploreContextString;
-(id)buildFeaturedBadgeStyledString;
-(id)buildTimestampContextStringWithExplore:(char)arg1 ;
-(id)buildSocialContextString;
-(id)buildTranslationStyledStringWithExplore:(char)arg1 ;
-(IGFeedItemFeaturedBadge *)featuredBadge;
-(id)buildShortFormatTimestamp;
-(id)previewCommentsInFeed;
-(NSString *)exploreContext;
-(NSString *)permalink;
-(NSString *)exploreSourceToken;
-(void)reportSpamWithSourceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportInappropriateWithSourceName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteItem;
-(NSString *)socialContext;
-(unsigned)feedItemType;
-(void)setNeedsFetch:(char)arg1 ;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)postFeedItemUpdatedNotification:(int)arg1 ;
-(id)likeActionSourceInfoUserDidDoubleTap:(char)arg1 ;
-(void)updateLocalLikeStatus:(char)arg1 withUser:(id)arg2 ;
-(void)invalidateActiveComments;
-(id)parseCommentArrayFromDictionary:(id)arg1 ;
-(void)setCommentCursor:(NSString *)arg1 ;
-(void)setMoreCommentsAvailable:(char)arg1 ;
-(void)setCaptionIsEdited:(char)arg1 ;
-(void)setNumCommentInPreview:(int)arg1 ;
-(void)setCollapseComments:(char)arg1 ;
-(void)setCaptionWithDictionary:(id)arg1 notify:(char)arg2 ;
-(void)setAllComments:(NSArray *)arg1 ;
-(void)schedulePostUpdatedNotification;
-(void)setActiveComments:(NSArray *)arg1 ;
-(void)commentRemoveRequestFinished:(id)arg1 notify:(char)arg2 ;
-(void)commentRemoveRequestFailed:(id)arg1 notify:(char)arg2 ;
-(void)setLastCommentTimeStamp:(IGDate *)arg1 ;
-(void)setLastReadTimeStamp:(IGDate *)arg1 ;
-(void)commentRemoveRequestStarted:(id)arg1 notify:(char)arg2 ;
-(void)postFeedItemUpdatedNotification;
-(void)setMediaIdWithPk:(id)arg1 ;
-(id)itemsArrayForPostDictionary:(id)arg1 ;
-(void)setLocationInfoFromDictionary:(id)arg1 ;
-(void)setLikeInfoFromDictionary:(id)arg1 ;
-(void)setViewersFromDictionary:(id)arg1 ;
-(void)setCommentInfoFromDictionary:(id)arg1 append:(char)arg2 allowCaptionOverwrite:(char)arg3 ;
-(void)setUsertagsFromEntry:(id)arg1 ;
-(void)setSponsoredPostInfoFromEntry:(id)arg1 ;
-(int)promotionStateFromString:(id)arg1 ;
-(id)mediaIdFromPK:(id)arg1 ;
-(char)collapseComments;
-(int)numCommentInPreview;
-(NSArray *)previewComments;
-(void)updateLocalItemsWithNewItems:(id)arg1 ;
-(void)removeLocalLocationInformation;
-(void)removeCommentWithPK:(id)arg1 ;
-(id)filteredActiveCaptionAndComments;
-(void)bulkCommentDeletionDidFinishForComments:(id)arg1 ;
-(void)bulkCommentDeletionDidFailForComments:(id)arg1 ;
-(id)bulkCommentDeletionDidUndoForComments:(id)arg1 ;
-(void)setInPhotosOfYou:(char)arg1 ;
-(char)isSponsoredApp;
-(void)deletePostItemFromItem:(id)arg1 ;
-(NSMutableOrderedSet *)likers;
-(char)captionIsEdited;
-(NSString *)commentCursor;
-(IGDate *)lastCommentTimeStamp;
-(IGDate *)lastReadTimeStamp;
-(IGFeedItemCollaboration *)collaboration;
-(void)setCollaboration:(IGFeedItemCollaboration *)arg1 ;
-(void)setFeaturedBadge:(IGFeedItemFeaturedBadge *)arg1 ;
-(NSNumber *)insightsImpressionCount;
-(NSNumber *)insightsReachCount;
-(NSNumber *)insightsEngagementCount;
-(void)setOrganicTrackingToken:(NSString *)arg1 ;
-(char)isReelMedia;
-(void)setPendingComments:(NSMutableDictionary *)arg1 ;
-(NSArray *)activeComments;
-(void)fetchAdditionalInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)exploreImpressionToken;
-(NSString *)organicTrackingToken;
-(int)linkStyle;
-(id)viewCountText;
-(id)likeText;
-(int)promotionState;
-(void)setInsightsImpressionCount:(NSNumber *)arg1 ;
-(void)setInsightsReachCount:(NSNumber *)arg1 ;
-(void)setInsightsEngagementCount:(NSNumber *)arg1 ;
-(char)inPhotosOfYou;
-(IGCommentModel *)headline;
-(IGUser *)user;
-(int)mediaType;
-(int)commentCount;
-(int)likeCount;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(id)itemId;
-(void)setCommentCount:(int)arg1 ;
-(char)shouldLoop;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isHidden;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(char)isExpanded;
-(void)setIsHidden:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(IGLocation *)location;
-(NSURL *)link;
-(IGCommentModel *)caption;
-(int)attribution;
-(void)setCaption:(IGCommentModel *)arg1 ;
-(NSMutableDictionary *)pendingComments;
-(IGVideo *)video;
-(void)addComment:(id)arg1 ;
-(NSNumber *)iTunesItemIdentifier;
-(char)updateWithDictionary:(id)arg1 ;
-(NSNumber *)viewCount;
@end

