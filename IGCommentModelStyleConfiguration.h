

@class IGStringStyle;

@interface IGCommentModelStyleConfiguration : NSObject {

	unsigned _hash;
	char _supportVerifiedBadge;
	IGStringStyle* _commentStyle;
	IGStringStyle* _moreTokenStyle;
	IGStringStyle* _usernameStyle;

}

@property (nonatomic,copy) IGStringStyle * commentStyle;                //@synthesize commentStyle=_commentStyle - In the implementation block
@property (nonatomic,copy) IGStringStyle * moreTokenStyle;              //@synthesize moreTokenStyle=_moreTokenStyle - In the implementation block
@property (nonatomic,copy) IGStringStyle * usernameStyle;               //@synthesize usernameStyle=_usernameStyle - In the implementation block
@property (assign,nonatomic) char supportVerifiedBadge;                 //@synthesize supportVerifiedBadge=_supportVerifiedBadge - In the implementation block
+(id)albumConfig;
+(id)verifiedConfig;
+(id)defaultConfig;
-(IGStringStyle *)moreTokenStyle;
-(IGStringStyle *)usernameStyle;
-(char)supportVerifiedBadge;
-(void)setCommentStyle:(IGStringStyle *)arg1 ;
-(void)setMoreTokenStyle:(IGStringStyle *)arg1 ;
-(void)setUsernameStyle:(IGStringStyle *)arg1 ;
-(void)setSupportVerifiedBadge:(char)arg1 ;
-(IGStringStyle *)commentStyle;
-(id)initWithCommentStyle:(id)arg1 moreTokenStyle:(id)arg2 usernameStyle:(id)arg3 supportVerifiedBadge:(char)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

