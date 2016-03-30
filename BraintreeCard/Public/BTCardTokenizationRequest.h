#import "BTCard.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BTCardTokenizationRequest : NSObject

- (instancetype)initWithCard:(BTCard *)card;

@property (nonatomic, strong) BTCard *card;

#pragma mark - UnionPay properties

/// The mobile phone number to use to verify the enrollment via SMS.
@property (nonatomic, copy) NSString *mobilePhoneNumber;

/// The country code for the mobile phone number. This string should only contain digits.
/// By default, this is set to 62.
@property (nonatomic, copy) NSString *mobileCountryCode;

/// The enrollment auth code sent via SMS to the mobile phone number. The auth code is
/// needed to tokenize a UnionPay card that requires enrollment.
@property (nonatomic, copy, nullable) NSString *enrollmentAuthCode;

/// The UnionPay enrollment ID
@property (nonatomic, copy, nullable, readonly) NSString *enrollmentID;

@end

NS_ASSUME_NONNULL_END
