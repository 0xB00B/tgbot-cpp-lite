#ifndef TGBOT_CHATPERMISSIONS_H
#define TGBOT_CHATPERMISSIONS_H

#include <memory>

namespace TgBot {

/**
 * @brief Describes actions that a non-administrator user is allowed to take in a chat.
 * 
 * @ingroup types
 */

class ChatPermissions {
public:
    typedef std::shared_ptr<ChatPermissions> Ptr;

    /**
     * @brief Optional. True, if the user is allowed to send text messages, contacts, locations and venues
     */
    bool canSendMessages;

    /**
     * @brief Optional. True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes, implies canSendMessages
     */
    bool canSendMediaMessages;

    /**
     * @brief Optional. True, if the user is allowed to send polls, implies canSendMessages
     */
    bool canSendPolls;

    /**
     * @brief Optional. True, if the user is allowed to send animations, games, stickers and use inline bots, implies canSendMediaMessages
     */
    bool canSendOtherMessages;

    /**
     * @brief Optional. True, if the user is allowed to add web page previews to their messages, implies canSendMediaMessages
     */
    bool canAddWebPagePreviews;

    /**
     * @brief Optional. True, if the user is allowed to change the chat title, photo and other settings.
     * 
     * Ignored in public supergroups
     */
    bool canChangeInfo;

    /**
     * @brief Optional. True, if the user is allowed to invite new users to the chat
     */
    bool canInviteUsers;

    /**
     * @brief Optional. True, if the user is allowed to pin messages.
     * 
     * Ignored in public supergroups
     */
    bool canPinMessages;

    /**
     * @brief Optional. True, if the user is allowed to create forum topics.
     * 
     * If omitted defaults to the value of canPinMessages
     */
    bool canManageTopics;
};
}

#endif //TGBOT_CHATPERMISSIONS_H
