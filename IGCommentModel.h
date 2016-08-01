
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@protocol NSObject;
@class NSString, IGFeedItemComments, IGUser, IGDate;

@interface IGCommentModel : NSObject <NSCoding, IGDKDiffable> {

	id<NSObject> _diffIdentifier;
	char _wasMarkedAsSpam;
	char _didReportAsSpam;
	char _showTranslation;
	char _hasTranslation;
	NSString* _pk;
	IGFeedItemComments* _feedItemComments;
	IGUser* _user;
	NSString* _text;
	int _type;
	IGDate* _createdAt;
	int _postedState;
	int _likeCount;
	NSString* _idempotenceToken;
	NSString* _failureReason;
	NSString* _translation;

}

@property (nonatomic,retain) NSString * idempotenceToken;                               //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * pk;                                               //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic,__weak) IGFeedItemComments * feedItemComments;              //@synthesize feedItemComments=_feedItemComments - In the implementation block
@property (nonatomic,retain) IGUser * user;                                             //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGDate * createdAt;                                        //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) int postedState;                                           //@synthesize postedState=_postedState - In the implementation block
@property (assign,nonatomic) char wasMarkedAsSpam;                                      //@synthesize wasMarkedAsSpam=_wasMarkedAsSpam - In the implementation block
@property (assign,nonatomic) char didReportAsSpam;                                      //@synthesize didReportAsSpam=_didReportAsSpam - In the implementation block
@property (assign,nonatomic) int likeCount;                                             //@synthesize likeCount=_likeCount - In the implementation block
@property (nonatomic,readonly) char canDelete; 
@property (nonatomic,copy) NSString * failureReason;                                    //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) char showTranslation;                                      //@synthesize showTranslation=_showTranslation - In the implementation block
@property (nonatomic,readonly) char hasTranslation;                                     //@synthesize hasTranslation=_hasTranslation - In the implementation block
@property (nonatomic,copy) NSString * translation;                                      //@synthesize translation=_translation - In the implementation block
+(id)defaultTruncationTokenString;
+(id)moreTruncationTokenStringWithConfiguration:(id)arg1 ;
-(NSString *)pk;
-(id)diffIdentifier;
-(id)buildStyledStringWithNewline:(char)arg1 configuration:(id)arg2 ;
-(id)buildMetadataStyledStringWithLeftLocalization:(char)arg1 enableCommentLikes:(char)arg2 ;
-(void)setPk:(NSString *)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4 configuration:(id)arg5 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 maximumUntruncatedNumberOfLines:(int)arg3 truncatedToNumberOfLines:(int)arg4 truncationToken:(id)arg5 configuration:(id)arg6 ;
-(void)setDidReportAsSpam:(char)arg1 ;
-(void)setPostedState:(int)arg1 ;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(IGFeedItemComments *)feedItemComments;
-(int)postedState;
-(char)wasMarkedAsSpam;
-(char)didReportAsSpam;
-(char)hasTranslation;
-(NSString *)idempotenceToken;
-(id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3 ;
-(id)styledStringForWidth:(float)arg1 feedItem:(id)arg2 shouldCollapseCaption:(char)arg3 configuration:(id)arg4 ;
-(void)reportWithReason:(int)arg1 ;
-(void)setFeedItemComments:(IGFeedItemComments *)arg1 ;
-(void)setWasMarkedAsSpam:(char)arg1 ;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(void)setFailureReason:(NSString *)arg1 ;
-(char)showTranslation;
-(void)setShowTranslation:(char)arg1 ;
-(id)stringWithCollapsedEmptyLines:(id)arg1 ;
-(id)buildTimestampAndCaptionEditedMetadataStyledStringWithLeftLocalization:(char)arg1 enableCommentLikes:(char)arg2 ;
-(id)buildCommentLikeMetadataStyledStringWithLeftLocalization:(char)arg1 enableCommentLikes:(char)arg2 ;
-(char)needRightAlighmentForLeftLocalization:(char)arg1 enableCommentLikes:(char)arg2 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(int)likeCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)translation;
-(void)setTranslation:(NSString *)arg1 ;
-(char)canDelete;
-(void)setLikeCount:(int)arg1 ;
-(void)setCreatedAt:(IGDate *)arg1 ;
-(NSString *)failureReason;
-(IGDate *)createdAt;
@end

