

@interface IGDirectThreadHelper : NSObject
+(char)threadHasUnreadContent:(id)arg1 ;
+(char)threadHasNewerContent:(id)arg1 thanThread:(id)arg2 ;
+(id)parseLinkFromString:(id)arg1 onlyContainsOneLink:(char*)arg2 ;
+(id)threadTypeKeyFromRecipientType:(unsigned)arg1 ;
+(char)hasSameURLForArray:(id)arg1 andArray:(id)arg2 ;
+(char)hasSameUrlStringForArray:(id)arg1 andLinks:(id)arg2 ;
+(id)urlsToStrings:(id)arg1 ;
@end

