

@class NSString, NSArray;

@interface IGBrandLiftQuestion : NSObject {

	int _questionStyle;
	NSString* _title;
	NSString* _subtitle;
	NSString* _questionID;
	NSArray* _possibleAnswers;
	int _totalResponders;
	NSString* _trackingToken;
	NSString* _surveyID;

}

@property (assign,nonatomic) int questionStyle;                      //@synthesize questionStyle=_questionStyle - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * questionID;                    //@synthesize questionID=_questionID - In the implementation block
@property (nonatomic,retain) NSArray * possibleAnswers;              //@synthesize possibleAnswers=_possibleAnswers - In the implementation block
@property (assign,nonatomic) int totalResponders;                    //@synthesize totalResponders=_totalResponders - In the implementation block
@property (nonatomic,copy) NSString * trackingToken;                 //@synthesize trackingToken=_trackingToken - In the implementation block
@property (nonatomic,copy) NSString * surveyID;                      //@synthesize surveyID=_surveyID - In the implementation block
+(id)questionForMessage:(id)arg1 ;
-(NSString *)trackingToken;
-(void)setQuestionID:(NSString *)arg1 ;
-(void)setTotalResponders:(int)arg1 ;
-(void)setQuestionStyle:(int)arg1 ;
-(void)setPossibleAnswers:(NSArray *)arg1 ;
-(NSString *)questionID;
-(int)totalResponders;
-(void)setTrackingToken:(NSString *)arg1 ;
-(NSString *)surveyID;
-(void)setSurveyID:(NSString *)arg1 ;
-(NSArray *)possibleAnswers;
-(int)questionStyle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

